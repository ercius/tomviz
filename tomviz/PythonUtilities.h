/******************************************************************************

  This source file is part of the tomviz project.

  Copyright Kitware, Inc.

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

******************************************************************************/
#ifndef tomvizPythonUtilties_h
#define tomvizPythonUtilties_h

// Collection of miscellaneous Python utility functions.

#include "vtkPython.h" // must be first

#include <QList>
#include <QString>
#include <QVariant>

namespace tomviz {

/// Check for Python error. Prints error and clears it if an error has occurred.
/// Return true if an error has occurred, false otherwise.
bool checkForPythonError();

/// Convert a QString to a Python string
PyObject* toPyObject(const QString& str);

/// Convert a QVariant object into the appropriate Python type
PyObject* toPyObject(const QVariant& value);

// Convert a QVariantList into a Python list
PyObject* toPyObject(const QVariantList& list);
}

#endif