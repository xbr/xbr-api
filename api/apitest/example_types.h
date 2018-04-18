
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.11.0.0
//   Input filename:  example.bond
//   Output filename: example_types.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0700
#error This file was generated by a newer version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0b00
#error This file was generated by an older version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>



namespace example
{
    
    struct Record
    {
        std::string name;
        std::vector<double> items;
        
        Record()
        {
        }

        
        // Compiler generated copy ctor OK
        Record(const Record&) = default;
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        Record(Record&& other)
          : name(std::move(other.name)),
            items(std::move(other.items))
        {
        }
#else
        Record(Record&&) = default;
#endif
        
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        Record& operator=(Record other)
        {
            other.swap(*this);
            return *this;
        }
#else
        // Compiler generated operator= OK
        Record& operator=(const Record&) = default;
        Record& operator=(Record&&) = default;
#endif

        bool operator==(const Record& other) const
        {
            return true
                && (name == other.name)
                && (items == other.items);
        }

        bool operator!=(const Record& other) const
        {
            return !(*this == other);
        }

        void swap(Record& other)
        {
            using std::swap;
            swap(name, other.name);
            swap(items, other.items);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(::example::Record& left, ::example::Record& right)
    {
        left.swap(right);
    }
} // namespace example
