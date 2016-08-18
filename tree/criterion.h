#ifndef _MACHINELEARNING_TREE_CRITERION_H_
#define _MACHINELEARNING_TREE_CRITERION_H_

namespace tree {

/**
 * \brief Base class that defines the many criterious of splitting.
 *
 * This interface provides some methods that are used to compute the impurity
 * of a given Node object.
 * Some impurity measures are Gini, Entrophy and Missclassification Error Rate
 * for classification problens and MSE for regression
 * problems.
 */
class Criterion {
 public:
  /**
   * \brief Standard destructor.
   */
  virtual ~Criterion();

  /**
   * \brief Computes the impurity measure for the given node.
   * \param node contains the representation of points that will be used to
   * compute the impurity.
   * \return the impurity of the data in the given node.
   */
  virtual double Impurity(const Node& node) const = 0;
};

}  // namespace tree

#endif
