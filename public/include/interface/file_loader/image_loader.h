#pragma once
#include <iostream>
#include "interface/rhi/rhi_enums.h"
namespace Arieo::Interface::FileLoader
{
    struct ImageBuffer
    {
        void* m_buffer = nullptr;

        size_t m_size = 0;
        size_t m_width = 0;
        size_t m_height = 0;
        size_t m_depth = 0;
        size_t m_mip_map_count = 0;

        Interface::RHI::Format m_format;
    };

    class IImageLoader
    {
    public:
        virtual ImageBuffer loadDDS(void* buffer, size_t size) = 0;
    };
}