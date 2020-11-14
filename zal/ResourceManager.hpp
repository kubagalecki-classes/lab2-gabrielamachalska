#pragma once

#include <memory>

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager()
        : resource(std::make_shared<Resource>())
    {
    }

    ResourceManager(const ResourceManager &other)
        : resource(other.resource)
    {
    }

    ResourceManager(ResourceManager &&other)
        : resource(std::move(other.resource))
    {
    }

    ResourceManager& operator=(const ResourceManager &other)
    {
        if(&other != this)
        {
            resource = other.resource;
        }

        return *this;
    }

    ResourceManager& operator=(ResourceManager &&other)
    {
        if(&other != this)
        {
            resource = std::move(other.resource);
        }

        return *this;
    }

    double get()
    {
        return resource->get();
    }

private:
    std::shared_ptr<Resource> resource;
};