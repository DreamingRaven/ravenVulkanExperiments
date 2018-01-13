//
// Created by georgeraven on 1/13/18.
//

#ifndef RAVENVULKANEXPERIMENTS_EXAMPLEVARIABLEARRAYTEMPLATE_H
#define RAVENVULKANEXPERIMENTS_EXAMPLEVARIABLEARRAYTEMPLATE_H

template <int N> // compile time array size template
class ExampleVariableArrayTemplate {
private:
    int m_array[N];
protected:
public:
    int getSize();
};

#include "ExampleVariableArrayTemplate.tpp" // file to keep template implementation sep'rt

#endif //RAVENVULKANEXPERIMENTS_EXAMPLEVARIABLEARRAYTEMPLATE_H