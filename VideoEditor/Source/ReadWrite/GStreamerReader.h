/*
  ==============================================================================

    GStreamerReader.h
    Created: 23 Jan 2020 5:04:43pm
    Author:  nikos

  ==============================================================================
*/

#pragma once
#include <memory>
#include "foleys_video_engine/ReadWrite/foleys_AVReader.h"

namespace EVA
{
    class GStreamerReader : public foleys::AVReader
    {
    public:
    protected:
    private:
        class Pimpl;
        friend Pimpl;

        std::unique_ptr<Pimpl> pimpl;
    };
}
