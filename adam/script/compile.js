#! /usr/bin/env node

const fs = require("node:fs");
const readline = require("node:readline");
const path = require("node:path");

const resolvePath = (filename) => {
  return path.resolve(`${__dirname}/${filename}`);
};

const loadLayout = (filename) => {
  console.log(`Loading layout: ${filename}`);
  var layoutFile = resolvePath(`../layout/${filename}`);

  var layoutContent = fs.readFileSync(layoutFile, "utf8");
  var layoutJson = layoutContent
    .split("\n")
    .filter((l) => !l.trim().startsWith("//"))
    .join("");

  return JSON.parse(layoutJson);
};

const saveLayout = (layout, filename) => {
  console.log(`Saving layout: ${filename}`);
  var filename = resolvePath(`../${filename}`);
  var json = JSON.stringify(layout);

  return fs.writeFileSync(filename, json);
};

const raiseError = (message) => {
  console.error(message);
  throw message;
};

const mergeLayouts = (base, merge) => {
  console.log("Merging layouts ...");

  // merge layouts
  console.log("... merging layouts");
  var totalLayouts = merge.layout.length + base.layout.length;
  if (totalLayouts > 4) {
    raiseError(`Error (Too Many Layouts): Adam supports up to 4 layouts. There are ${totalLayouts} in this layout.`);
  }
  merge.layout.forEach((layout) => base.layout.push(layout));

  // merge macros
  console.log("... merging macros");
  var totalMacros = merge.macro.length + base.macro.length;
  if (totalMacros > 16) {
    raiseError(`Error (Too Many Macros): Adam supports up to 16 macros. There are ${totalMacros} in this layout.`);
  }
  merge.macro.forEach((macro) => base.macro.push(macro));

  console.log("Merge complete");
  return base;
};

try {
  var base = loadLayout("layout.json");
  var merge = loadLayout("secret");
  var compiled = mergeLayouts(base, merge);
  saveLayout(compiled, "adam_asellitt.vil");

  console.log("Layout compiled");
} catch (err) {
  console.log("Could not compile layout");
  console.error(err);
}
