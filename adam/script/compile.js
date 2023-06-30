#! /usr/bin/env node

const resolvePath = (filename) => {
  resolve = require("path").resolve;
  return resolve(`${__dirname}/${filename}`);
};

const loadLayout = (filename) => {
  console.log(`Loading layout: ${filename}`);
  var readFile = require("fs").readFileSync;
  var layout = resolvePath(`../layout/${filename}`);

  return JSON.parse(readFile(layout, "utf8"));
};

const saveLayout = (layout, filename) => {
  console.log(`Saving layout: ${filename}`);
  var writeFile = require("fs").writeFileSync;
  var filename = resolvePath(`../${filename}`);
  var json = JSON.stringify(layout);

  return writeFile(filename, json);
};

const raiseError = (message) => {
  console.error(message);
  throw message;
};

const mergeLayouts = (base, merge) => {
  console.log("Merging layouts ...");

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
}
