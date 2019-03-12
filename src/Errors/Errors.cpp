/*
** EPITECH PROJECT, 2019
** OOP - nanotekspice
** File description:
** Errors
*/

#include "Errors.hpp"
#include <iostream>

namespace nts {
    NanoError::NanoError(const std::string &message,
                         const std::string &component) noexcept :
        std::exception()
    {
        this->message = message.c_str();
        this->component = message.c_str();
        std::cerr << this->what() << std::endl;
    }

    NanoError::~NanoError()
    {

    }

    const char *NanoError::what() const noexcept
    {
        return (message);
    }

    const char *NanoError::where() const noexcept
    {
        return (component);
    }

    NonExistingFileError::NonExistingFileError(const std::string &message, const std::string &component) noexcept : NanoError(message, component)
    {

    }

    InvalidExtensionError::InvalidExtensionError(const std::string &message, const std::string &component) noexcept : NanoError(message, component)
    {

    }

    SyntaxError::SyntaxError(const std::string &message,
                             const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    TypeCompError::TypeCompError(const std::string &message,
                                 const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    NameCompError::NameCompError(const std::string &message,
                                 const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    PinExistError::PinExistError(const std::string &message,
                                 const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    SameNameError::SameNameError(const std::string &message,
                                 const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    OutpLinkError::OutpLinkError(const std::string &message,
                                 const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    InpValError::InpValError(const std::string &message,
                             const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    BadInpError::BadInpError(const std::string &message,
                             const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    InvalidLinkError::InvalidLinkError(const std::string &message,
                                    const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    NoChipError::NoChipError(const std::string &message,
                             const std::string &component) noexcept :
        NanoError(message, component)
    {

    }

    NoLinksError::NoLinksError(const std::string &message,
                               const std::string &component) noexcept :
        NanoError(message, component)
    {

    }
    
    NoArgsError::NoArgsError(const std::string &message,
                             const std::string &component) noexcept :
        NanoError(message, component)
    {

    }
}
