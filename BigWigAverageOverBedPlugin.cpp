#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "BigWigAverageOverBedPlugin.h"

void BigWigAverageOverBedPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void BigWigAverageOverBedPlugin::run() {}

void BigWigAverageOverBedPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "bigWigAverageOverBed";
myCommand += " ";
myCommand += PluginManager::addPrefix(myParameters["bigwig"]);
myCommand += " " + PluginManager::addPrefix(myParameters["bedfile"])+" ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BigWigAverageOverBedPlugin> BigWigAverageOverBedPluginProxy = PluginProxy<BigWigAverageOverBedPlugin>("BigWigAverageOverBed", PluginManager::getInstance());
