/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// QT includes
#include <QApplication>
#include <QDebug>
#include <QTimer>

// qMRML includes
#include "qMRMLNodeComboBox.h"

// MRML includes
#include <vtkMRMLModelNode.h>
#include <vtkMRMLScene.h>

// VTK includes
#include <vtkNew.h>

// STD includes

int qMRMLNodeComboBoxLazyUpdateTest1( int argc, char * argv [] )
{
  QApplication app(argc, argv);

  qMRMLNodeComboBox nodeSelector;
  nodeSelector.setNodeTypes(QStringList("vtkMRMLModelNode"));
  nodeSelector.setNoneEnabled(true);

  vtkNew<vtkMRMLScene> scene;
  nodeSelector.setMRMLScene(scene.GetPointer());

  scene->SetIsImporting(true);
  vtkNew<vtkMRMLModelNode> modelNode;
  scene->AddNode(modelNode.GetPointer());

  scene->SetIsImporting(false);
  nodeSelector.show();

  return app.exec();
}
