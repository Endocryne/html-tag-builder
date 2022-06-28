#pragma once

#include <string>
#include <sstream>
#include <memory>
#include "Element.h"

struct Builder
{
    Element root;
    Builder(std::string root_name) { root.name = root_name; }

    Builder add_child(std::string child_name, std::string child_text) {
        Element e{child_name, child_text};
        root.elements.emplace_back(e);
        return *this;
    }
    std::string str() const { return root.str(); }
};
