/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/



#include "PluginProcessor.h"


REGISTER_STATIC_DSP_LIBRARIES()
{
    REGISTER_STATIC_DSP_FACTORY(HiseCoreDspFactory);
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
	return new BackendProcessor();	
};

AudioProcessor* StandaloneProcessor::createProcessor(void) { return nullptr; }