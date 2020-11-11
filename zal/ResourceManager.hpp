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
	ResourceManager(Resource* other){
		resource = other;
	}

		double get() {
			return resource -> get();
	};

	
	~ResourceManager(){
		delete resource;
	}
};