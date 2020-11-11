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
		delete resource;
		resource = other;
	}
	ResourceManager(const Resource& other){
		delete resource;
		*resource = other;
	}
	   ResourceManager& operator=(const Resource& t) { *resource = t ; return *this; }
		ResourceManager& operator=(Resource &&other) { *resource = other; return *this;}




	   ResourceManager(Resource &&other)
	{
		delete resource;
		*resource = other;
	}





		double get() {
			return resource -> get();
	};

	
	~ResourceManager(){
		delete resource;
	}
};