/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#ifndef ADDPOSTPROCESSORACTION_H
#define ADDPOSTPROCESSORACTION_H

#include "MooseObjectAction.h"
#include "ExecStore.h"

class AddPostprocessorAction;

template<>
InputParameters validParams<AddPostprocessorAction>();


class AddPostprocessorAction: public MooseObjectAction
{
public:
  AddPostprocessorAction(InputParameters params);
  AddPostprocessorAction(const std::string & deprecated_name, InputParameters params); // DEPRECATED CONSTRUCTOR

  virtual void act();
};

#endif //ADDPOSTPROCESSORACTION_H
