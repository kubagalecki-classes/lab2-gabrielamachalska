#pragma once

#include "Resource.hpp"

class ResourceManager
{
#pragma once

#include "Resource.hpp"

class ResourceManager
{
	private:
		Resource* resource;

	public:
	ResourceManager()
	{
	resource = new Resource();
	}

		double get() {
			return resource -> get();
	};

	
	~ResourceManager(){
		delete resource;
	}
};