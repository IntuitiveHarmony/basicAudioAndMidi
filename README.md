# Learning the JUCE Framework

I am at the very beginning of my journey into JUCE.  I have a very basic understanging of C++, not quite enough to be dangerous... yet

This code follows one of the first [tutorials](https://docs.juce.com/master/tutorial_code_basic_plugin.html "JUCE Tutorial") from the JUCE website.


## Things I learned:

### JUCE Project contains two main classes:

- `PluginProcessor`: handles audio and MIDI in and out

- `PluginEditor`: handles GUI controls or visuals

The Processor is considered the parent of the editor. There can be many editors that reference a single editor.  However, there can only be one processor

- `processBlock()` is a method of the `PluginProcessor` that receives and produces audio and MIDI data. IN and OUT

- Within the processor we intercept MIDI or audio data and replace it with our code's influence 🔥

### Slider Styles

There are many different styles of sliders in JUCE here is a link to them:
https://docs.juce.com/master/classSlider.html#af1caee82552143dd9ff0fc9f0cdc0888


### Things to study up on

[Listeners and broadcasters](https://docs.juce.com/master/tutorial_listeners_and_broadcasters.html "JUCE Tutorial")