// Boost.TypeErasure library
//
// Copyright 2011 Steven Watanabe
//
// Distributed under the Boost Software License Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// $Id$

#include <boost/type_erasure/any.hpp>
#include <boost/type_erasure/builtin.hpp>
#include <boost/type_erasure/operators.hpp>
#include <boost/mpl/vector.hpp>

using namespace boost::type_erasure;

class X {};

typedef boost::mpl::vector<copy_constructible<>, incrementable<> > test_concept;

int main()
{
    X x = {};
    any<test_concept> a(x);
    ++a;
}