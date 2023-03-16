/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BasicAudioAndMidiAudioProcessorEditor::BasicAudioAndMidiAudioProcessorEditor (BasicAudioAndMidiAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
    // ~~ Size of the plugin window ~~
    setSize (200, 200);
    
    // ~~ Define the parameters of the slider object
    midiVolume.setSliderStyle (juce::Slider::LinearBarVertical);
    midiVolume.setRange (0.0, 127.0, 1.0);
    midiVolume.setTextBoxStyle (juce::Slider::NoTextBox, false, 90, 0);
    midiVolume.setPopupDisplayEnabled (true, false, this);
    midiVolume.setTextValueSuffix (" Volume");
    midiVolume.setValue (1.0);
    
    // ~~ Add Slider to the editor ~~
    addAndMakeVisible (&midiVolume);
}

BasicAudioAndMidiAudioProcessorEditor::~BasicAudioAndMidiAudioProcessorEditor()
{
}

//==============================================================================
void BasicAudioAndMidiAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    
    //  ~~ Fill the whole window white ~~
    g.fillAll (juce::Colours::white);
    // ~~ Set current drawing color ~~
    g.setColour (juce::Colours::magenta);
    // ~~ Set font size ~~
    g.setFont (15.0f);
    // ~~ Draw text to the screen ~~
    g.drawFittedText ("Midi Volume", 0, 0, getWidth(), 30, juce::Justification::centred, 1);
}

void BasicAudioAndMidiAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    // ~~ Set the position and size of slider (x, y, width, height) ~~
    midiVolume.setBounds(40, 30, 20, getHeight() - 60);
}
