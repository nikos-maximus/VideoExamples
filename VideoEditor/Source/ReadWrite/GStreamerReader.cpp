/*
  ==============================================================================

    GStreamerReader.cpp
    Created: 23 Jan 2020 5:05:01pm
    Author:  nikos

  ==============================================================================
*/

#include "GStreamerReader.h"

namespace EVA
{
    class GStreamerReader::Pimpl
    {
    public:
        Pimpl (GStreamerReader& readerToUse, juce::File file, foleys::StreamTypes type)
            : reader (readerToUse)
        {}

    protected:
    private:
        GStreamerReader& reader;
    };
}
