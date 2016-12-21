#pragma once

#include <GL\glew.h>
#include <glm\glm.hpp>
#include <FreeImage.h>

namespace AdventureEngine
{
	class Texture
	{
	public:
		friend class AssetManager;

		~Texture();

		GLuint getID() const;

		FIBITMAP* getImageData() const;
		glm::vec4 getPixel(unsigned int x, unsigned int y) const;

		unsigned int getWidth() const;
		unsigned int getHeight() const;

		unsigned int getAtlasIndex() const;
		glm::uvec2 getAtlasSize() const;

	private:
		Texture(GLuint id, FIBITMAP* imageData, unsigned int atlasIndex, glm::uvec2 atlasSize);

		GLuint m_id;
		FIBITMAP* m_imageData;

		unsigned int m_atlasIndex;
		glm::uvec2 m_atlasSize;
	};
}

