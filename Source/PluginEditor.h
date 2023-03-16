/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class BasicAudioAndMidiAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                // ~~ Add inheritance and default callback function ~~
                                                private juce::Slider::Listener
{
public:
    BasicAudioAndMidiAudioProcessorEditor (BasicAudioAndMidiAudioProcessor&);
    ~BasicAudioAndMidiAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // ~~ Add default callback function  ~~
    void sliderValueChanged (juce::Slider* slider) override;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BasicAudioAndMidiAudioProcessor& audioProcessor;

    // ~~ Create Slider Object ~~
    juce::Slider midiVolume;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicAudioAndMidiAudioProcessorEditor)
};
