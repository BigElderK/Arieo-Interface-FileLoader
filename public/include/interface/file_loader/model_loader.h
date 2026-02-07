#pragma once
#include <iostream>
#include "interface/rhi/rhi_enums.h"
namespace Arieo::Interface::FileLoader
{
    struct ModelBuffer
    {
        struct Vertex
        {
            Base::Math::Vector3 pos;
            Base::Math::Vector3 color;
            Base::Math::Vector2 tex_coord;
        };

        std::vector<Vertex> m_vertices;
        std::vector<uint16_t> m_indices;
    };

    class IModelLoader
    {
    public:
        virtual ModelBuffer loadObj(void* buffer, size_t size) = 0;
    };
}