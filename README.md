# Learning the JUCE Framework

I am at the very beginning of my journey into JUCE.  I am also at the beginning of my joruney into C++.

This code follows one of the first [tutorials](https://docs.juce.com/master/tutorial_code_basic_plugin.html "JUCE Tutorial") from the JUCE website which covers how to build a slider that will adjust the MIDI volume..

![Slider GIF](/images/Slider.gif "my slider so far")

In order to build this plugin I am editing the four files in the `source` folder.  All of the code I added while following the tutorial will be commented on  `// ~~ like this ~~`

<hr />


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

### Tutorial complete

I completed all of the steps in the turorial and loaded the plugin in to Ableton, and no sound came out of the MIDI track I armed it with.  The final plugin was supposed to change the volume of the track and it just muted it.  Since I am at the very beginning of this process I don't know where to begin to debug this so I will revisit it once I have some more experience with JUCE 