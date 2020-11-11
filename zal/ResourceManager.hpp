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
	ResourceManager(const Resource& other){
		*resource = other;
	}
	   ResourceManager& operator=(const Resource& t) { *resource = t ; return *this; }


		double get() {
			return resource -> get();
	};

	
	~ResourceManager(){
		delete resource;
	}
};