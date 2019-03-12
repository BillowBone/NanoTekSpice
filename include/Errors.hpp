/*
** EPITECH PROJECT, 2019
** OOP - nanotekspice
** File description:
** Errors.hpp
*/

#ifndef ERRORS_HPP_
# define ERRORS_HPP_

# include <exception>
# include <string>

namespace nts {
    class NanoError : public std::exception
    {
    public:
        NanoError(const std::string &message = "Unknown",
                  const std::string &component = "Unknown") noexcept;
        ~NanoError();
        const char *what() const noexcept;
        const char *where() const noexcept;
    protected:
        const char *message;
        const char *component;
    };

    class NonExistingFileError : public NanoError
    {
        public:
            NonExistingFileError(const std::string &message = "Unknown",
                                const std::string &component = "Unknown") noexcept;
    };

    class InvalidExtensionError : public NanoError
    {
        public:
            InvalidExtensionError(const std::string &message = "Unknown",
                                  const std::string &component = "Unknown") noexcept;
    };

    class SyntaxError : public NanoError
    {
    public:
        SyntaxError(const std::string &message = "Unknown",
                    const std::string &component = "Unknown") noexcept;
    };

    class TypeCompError : public NanoError
    {
    public:
        TypeCompError(const std::string &message = "Unknown",
                      const std::string &component = "Unknown") noexcept;
    };

    class NameCompError : public NanoError
    {
    public:
        NameCompError(const std::string &message = "Unknown",
                      const std::string &component = "Unknown") noexcept;
    };

    class PinExistError : public NanoError
    {
    public:
        PinExistError(const std::string &message = "Unknown",
                      const std::string &component = "Unknown") noexcept;
    };

    class SameNameError : public NanoError
    {
    public:
        SameNameError(const std::string &message = "Unknown",
                      const std::string &component = "Unknown") noexcept;
    };

    class OutpLinkError : public NanoError
    {
    public:
        OutpLinkError(const std::string &message = "Unknown",
                      const std::string &component = "Unknown") noexcept;
    };

    class InpValError : public NanoError
    {
    public:
        InpValError(const std::string &message = "Unknown",
                    const std::string &component = "Unknown") noexcept;
    };

    class BadInpError : public NanoError
    {
    public:
        BadInpError(const std::string &message = "Unknown",
                    const std::string &component = "Unknown") noexcept;
    };

    class InvalidLinkError : public NanoError
    {
    public:
        InvalidLinkError(const std::string &message = "Unknown",
                         const std::string &component = "Unknown") noexcept;
    };

    class NoChipError : public NanoError
    {
    public:
        NoChipError(const std::string &message = "Unknown",
                    const std::string &component = "Unknown") noexcept;
    };

    class NoLinksError : public NanoError
    {
    public:
        NoLinksError(const std::string &message = "Unknown",
                     const std::string &component = "Unknown") noexcept;
    };

    class NoArgsError : public NanoError
    {
    public:
        NoArgsError(const std::string &message = "Unknown",
                    const std::string &component = "Unknown") noexcept;
    };
}

// namespace nts {
//     class NanoError : public std::exception
//     {
//     public:
//         NanoError(const std::string &message,
//                   const std::string &component = "Unknown") noexcept;
//         ~NanoError();
//         const char *what() const noexcept;
//         const char *where() const noexcept;
        
//     protected:
//         const std::string &message;
//         const std::string &component;
//     };

//     class NonExistingFileError : public NanoError
//     {
//         public:
//             NonExistingFileError(const std::string &message,
//                                 const std::string &component = "Unknown") noexcept;
//     };

//     class InvalidExtensionError : public NanoError
//     {
//         public:
//             InvalidExtensionError(const std::string &message, const std::string &component = "Unknown") noexcept;
//     };

//     class SyntaxError : public NanoError
//     {
//     public:
//         SyntaxError(const std::string &message,
//                     const std::string &component = "Unknown") noexcept;
//     };

//     class TypeCompError : public NanoError
//     {
//     public:
//         TypeCompError(const std::string &message,
//                       const std::string &component = "Unknown") noexcept;
//     };

//     class NameCompError : public NanoError
//     {
//     public:
//         NameCompError(const std::string &message,
//                       const std::string &component = "Unknown") noexcept;
//     };

//     class PinExistError : public NanoError
//     {
//     public:
//         PinExistError(const std::string &message,
//                       const std::string &component = "Unknown") noexcept;
//     };

//     class SameNameError : public NanoError
//     {
//     public:
//         SameNameError(const std::string &message,
//                       const std::string &component = "Unknown") noexcept;
//     };

//     class OutpLinkError : public NanoError
//     {
//     public:
//         OutpLinkError(const std::string &message,
//                       const std::string &component = "Unknown") noexcept;
//     };

//     class InpValError : public NanoError
//     {
//     public:
//         InpValError(const std::string &message,
//                     const std::string &component = "Unknown") noexcept;
//     };

//     class BadInpError : public NanoError
//     {
//     public:
//         BadInpError(const std::string &message,
//                     const std::string &component = "Unknown") noexcept;
//     };

//     class InvalidLinkError : public NanoError
//     {
//         public:
//             InvalidLinkError(const std::string &message,
//                             const std::string &component = "Unknown") noexcept;
//     };

//     class NoChipError : public NanoError
//     {
//     public:
//         NoChipError(const std::string &message,
//                     const std::string &component = "Unknown") noexcept;
//     };

//     class NoLinksError : public NanoError
//     {
//     public:
//         NoLinksError(const std::string &message,
//                      const std::string &component = "Unknown") noexcept;
//     };

//     class NoArgsError : public NanoError
//     {
//     public:
//         NoArgsError(const std::string &message,
//                     const std::string &component = "Unknown") noexcept;
//     };
// }
#endif /* !ERRORS_HPP_ */
