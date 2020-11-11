#pragma once

#include "Resource.hpp"

class ResourceManager
{
	private:
		std::unique_ptr<Resource> resource;

	public:
	ResourceManager()
		: resource{ std::make_unique<Resource>() }
	{
	}

	ResourceManager(Resource* other)
	{
		resource.reset(other);
	}

ResourceManager(Resource &&other)
	{
		resource.reset(std::move(&other));
	}
	
	~ResourceManager() = default;


	ResourceManager& operator=(const Resource& t)
	{
		*resource = t;
		return *this;
	}

	double get()
	{
		assert(resource);
		return resource->get();
	}
};