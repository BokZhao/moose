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

#ifndef NODALSCALARKERNEL_H
#define NODALSCALARKERNEL_H

#include "ScalarKernel.h"
#include "Coupleable.h"
#include "MooseVariableDependencyInterface.h"

class NodalScalarKernel;

template<>
InputParameters validParams<NodalScalarKernel>();

/**
 *
 */
class NodalScalarKernel :
  public ScalarKernel,
  public Coupleable,
  public MooseVariableDependencyInterface
{
public:
  NodalScalarKernel(const InputParameters & parameters);
  NodalScalarKernel(const std::string & deprecated_name, InputParameters parameters); // DEPRECATED CONSTRUCTOR
  virtual ~NodalScalarKernel();

  virtual void reinit();
  virtual void computeOffDiagJacobian(unsigned int jvar);

protected:
  /// List of node IDs
  std::vector<dof_id_type> _node_ids;
};

#endif /* NODALSCALARKERNEL_H */
