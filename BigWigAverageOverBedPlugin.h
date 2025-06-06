#ifndef BIGWIGAVERAGEOVERBEDPLUGIN_H
#define BIGWIGAVERAGEOVERBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BigWigAverageOverBedPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BigWigAverageOverBed";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
