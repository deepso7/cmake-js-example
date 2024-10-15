import { createRequire } from "module";
const require = createRequire(import.meta.url);
const addon = require("../build/Release/addon.node") as typeof import("addon");

export const add = addon.add;
