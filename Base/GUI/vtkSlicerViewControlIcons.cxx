
#include "vtkObjectFactory.h"
#include "vtkSlicerViewControlIcons.h"
#include "vtkKWIcon.h"
#include "vtkKWResourceUtilities.h"


//---------------------------------------------------------------------------
vtkStandardNewMacro ( vtkSlicerViewControlIcons );
vtkCxxRevisionMacro ( vtkSlicerViewControlIcons, "$Revision: 1.0 $");

//---------------------------------------------------------------------------
vtkSlicerViewControlIcons::vtkSlicerViewControlIcons ( )
{

    //--- "View Axis" images in the ViewControlFrame
    this->ViewAxisAIconLO = vtkKWIcon::New ( );
    this->ViewAxisAIconHI = vtkKWIcon::New ( );
    this->ViewAxisPIconLO = vtkKWIcon::New ( );
    this->ViewAxisPIconHI = vtkKWIcon::New ( );    
    this->ViewAxisRIconLO = vtkKWIcon::New ( );
    this->ViewAxisRIconHI = vtkKWIcon::New ( );    
    this->ViewAxisLIconLO = vtkKWIcon::New ( );
    this->ViewAxisLIconHI = vtkKWIcon::New ( );    
    this->ViewAxisSIconLO = vtkKWIcon::New ( );
    this->ViewAxisSIconHI = vtkKWIcon::New ( );    
    this->ViewAxisIIconLO = vtkKWIcon::New ( );
    this->ViewAxisIIconHI = vtkKWIcon::New ( );    
    this->ViewAxisTopCornerIcon = vtkKWIcon::New ( );    
    this->ViewAxisBottomCornerIcon = vtkKWIcon::New ( );    
    this->ViewAxisCenterIcon = vtkKWIcon::New ( );    

    this->SpinButtonIcon = vtkKWIcon::New ( );
    this->RockButtonIcon = vtkKWIcon::New ( );
    this->OrthoButtonIcon = vtkKWIcon::New ( );
    this->PerspectiveButtonIcon = vtkKWIcon::New ( );
    this->CenterButtonIcon = vtkKWIcon::New ( );
    this->SelectButtonIcon = vtkKWIcon::New ( );
    this->StereoButtonIcon = vtkKWIcon::New ( );
    this->LookFromButtonIcon = vtkKWIcon::New ( );
    this->RotateAroundButtonIcon = vtkKWIcon::New ( );
    this->VisibilityButtonIcon = vtkKWIcon::New ( );
    this->SliceOpacityButtonIcon = vtkKWIcon::New ( );
    
    //--- "Zoom in and out icons
    this->NavZoomInIcon = vtkKWIcon::New();
    this->NavZoomOutIcon = vtkKWIcon::New();

    //--- read in image data and assign to Icons.
    this->AssignImageDataToIcons ( );

}



//---------------------------------------------------------------------------
vtkSlicerViewControlIcons::~vtkSlicerViewControlIcons ( )
{

    // view from or rotate around icons
    if ( this->ViewAxisAIconLO ) {
        this->ViewAxisAIconLO->Delete ( );
        this->ViewAxisAIconLO = NULL;
    }
    if ( this->ViewAxisAIconHI ) {
        this->ViewAxisAIconHI->Delete ( );
        this->ViewAxisAIconHI = NULL;
    }
    if ( this->ViewAxisPIconLO ) {
        this->ViewAxisPIconLO->Delete ( );
        this->ViewAxisPIconLO = NULL;
    }
    if ( this->ViewAxisPIconHI ) {
        this->ViewAxisPIconHI->Delete ( );
        this->ViewAxisPIconHI = NULL;
    }
    if ( this->ViewAxisRIconLO ) {
        this->ViewAxisRIconLO->Delete ( );
        this->ViewAxisRIconLO = NULL;
    }
    if ( this->ViewAxisRIconHI ) {
        this->ViewAxisRIconHI->Delete ( );
        this->ViewAxisRIconHI = NULL;
    }
    if ( this->ViewAxisLIconLO ) {
        this->ViewAxisLIconLO->Delete ( );
        this->ViewAxisLIconLO = NULL;
    }
    if ( this->ViewAxisLIconHI ) {
        this->ViewAxisLIconHI->Delete ( );
        this->ViewAxisLIconHI = NULL;
    }
    if ( this->ViewAxisSIconLO ) {
        this->ViewAxisSIconLO->Delete ( );
        this->ViewAxisSIconLO = NULL;
    }
    if ( this->ViewAxisSIconHI ) {
        this->ViewAxisSIconHI->Delete ( );
        this->ViewAxisSIconHI = NULL;
    }
    if ( this->ViewAxisIIconLO ) {
        this->ViewAxisIIconLO->Delete ( );
        this->ViewAxisIIconLO = NULL;
    }
    if ( this->ViewAxisIIconHI ) {
        this->ViewAxisIIconHI->Delete ( );
        this->ViewAxisIIconHI = NULL;
    }
    if ( this->ViewAxisTopCornerIcon ) {
        this->ViewAxisTopCornerIcon->Delete ( );
        this->ViewAxisTopCornerIcon = NULL;
    }
    if ( this->ViewAxisBottomCornerIcon ) {
        this->ViewAxisBottomCornerIcon->Delete ( );
        this->ViewAxisBottomCornerIcon = NULL;
    }
    if ( this->ViewAxisCenterIcon ) {
        this->ViewAxisCenterIcon->Delete ( );
        this->ViewAxisCenterIcon = NULL;
    }
    if ( this->SpinButtonIcon )
      {
      this->SpinButtonIcon->Delete ( );
      this->SpinButtonIcon = NULL;
      }
    if ( this->RockButtonIcon )
      {
      this->RockButtonIcon->Delete ( );
      this->RockButtonIcon = NULL;
      }
    if ( this->OrthoButtonIcon )
      {
      this->OrthoButtonIcon->Delete ( );
      this->OrthoButtonIcon = NULL;
      }
    if ( this->PerspectiveButtonIcon )
      {
      this->PerspectiveButtonIcon->Delete ( );
      this->PerspectiveButtonIcon = NULL;
      }
    if ( this->CenterButtonIcon )
      {
      this->CenterButtonIcon->Delete ( );
      this->CenterButtonIcon = NULL;
      }
    if ( this->SelectButtonIcon )
      {
      this->SelectButtonIcon->Delete ( );
      this->SelectButtonIcon = NULL;
      }
    if ( this->StereoButtonIcon )
      {
      this->StereoButtonIcon->Delete ( );
      this->StereoButtonIcon = NULL;
      }
    if ( this->LookFromButtonIcon )
      {
      this->LookFromButtonIcon->Delete ( );
      this->LookFromButtonIcon = NULL;
      }
    if ( this->RotateAroundButtonIcon )
      {
      this->RotateAroundButtonIcon->Delete ( );
      this->RotateAroundButtonIcon = NULL;
      }
    if ( this->VisibilityButtonIcon )
      {
      this->VisibilityButtonIcon->Delete ( );
      this->VisibilityButtonIcon = NULL;
      }
    if ( this->SliceOpacityButtonIcon )
      {
      this->SliceOpacityButtonIcon->Delete ( );
      this->SliceOpacityButtonIcon = NULL;
      }

    // zoom images
    if ( this->NavZoomInIcon ) {
        this->NavZoomInIcon->Delete ( );
        this->NavZoomInIcon = NULL;
    }
    if ( this->NavZoomOutIcon ) {
        this->NavZoomOutIcon->Delete ( );
        this->NavZoomOutIcon = NULL;
    }


}


                                                              
//---------------------------------------------------------------------------
void vtkSlicerViewControlIcons::AssignImageDataToIcons ( ) {
    // Rotate around Icons (9 of these tile one image in the view control frame;
    // six of them have a "LO" and "HI" state that changes
    // on mouseover.


  this->ViewAxisAIconHI->SetImage( image_ViewAxisAHi,
                                   image_ViewAxisAHi_width,
                                   image_ViewAxisAHi_height,
                                   image_ViewAxisAHi_pixel_size,
                                   image_ViewAxisAHi_length, 0);
  this->ViewAxisAIconLO->SetImage( image_ViewAxisALo,
                                   image_ViewAxisALo_width,
                                   image_ViewAxisALo_height,
                                   image_ViewAxisALo_pixel_size,
                                   image_ViewAxisALo_length, 0);
  this->ViewAxisPIconLO->SetImage( image_ViewAxisPLo,
                                   image_ViewAxisPLo_width,
                                   image_ViewAxisPLo_height,
                                   image_ViewAxisPLo_pixel_size,
                                   image_ViewAxisPLo_length, 0);
  this->ViewAxisPIconHI->SetImage( image_ViewAxisPHi,
                                   image_ViewAxisPHi_width,
                                   image_ViewAxisPHi_height,
                                   image_ViewAxisPHi_pixel_size,
                                   image_ViewAxisPHi_length, 0);
  this->ViewAxisRIconLO->SetImage( image_ViewAxisRLo,
                                   image_ViewAxisRLo_width,
                                   image_ViewAxisRLo_height,
                                   image_ViewAxisRLo_pixel_size,
                                   image_ViewAxisRLo_length, 0);
  this->ViewAxisRIconHI->SetImage( image_ViewAxisRHi,
                                   image_ViewAxisRHi_width,
                                   image_ViewAxisRHi_height,
                                   image_ViewAxisRHi_pixel_size,
                                   image_ViewAxisRHi_length, 0);
  this->ViewAxisLIconLO->SetImage( image_ViewAxisLLo,
                                   image_ViewAxisLLo_width,
                                   image_ViewAxisLLo_height,
                                   image_ViewAxisLLo_pixel_size,
                                   image_ViewAxisLLo_length, 0);
  this->ViewAxisLIconHI->SetImage( image_ViewAxisLHi,
                                   image_ViewAxisLHi_width,
                                   image_ViewAxisLHi_height,
                                   image_ViewAxisLHi_pixel_size,
                                   image_ViewAxisLHi_length, 0);
  this->ViewAxisSIconLO->SetImage( image_ViewAxisSLo,
                                   image_ViewAxisSLo_width,
                                   image_ViewAxisSLo_height,
                                   image_ViewAxisSLo_pixel_size,
                                   image_ViewAxisSLo_length, 0);
  this->ViewAxisSIconHI->SetImage( image_ViewAxisSHi,
                                   image_ViewAxisSHi_width,
                                   image_ViewAxisSHi_height,
                                   image_ViewAxisSHi_pixel_size,
                                   image_ViewAxisSHi_length, 0);
  this->ViewAxisIIconLO->SetImage( image_ViewAxisILo,
                                   image_ViewAxisILo_width,
                                   image_ViewAxisILo_height,
                                   image_ViewAxisILo_pixel_size,
                                   image_ViewAxisILo_length, 0 );
  this->ViewAxisIIconHI->SetImage( image_ViewAxisIHi,
                                   image_ViewAxisIHi_width,
                                   image_ViewAxisIHi_height,
                                   image_ViewAxisIHi_pixel_size,
                                   image_ViewAxisIHi_length, 0);
  this->ViewAxisBottomCornerIcon->SetImage( image_ViewAxisBottomCorner,
                                            image_ViewAxisBottomCorner_width,
                                            image_ViewAxisBottomCorner_height,
                                            image_ViewAxisBottomCorner_pixel_size,
                                            image_ViewAxisBottomCorner_length, 0);
  this->ViewAxisTopCornerIcon->SetImage( image_ViewAxisTopCorner,
                                         image_ViewAxisTopCorner_width,
                                         image_ViewAxisTopCorner_height,
                                         image_ViewAxisTopCorner_pixel_size,
                                         image_ViewAxisTopCorner_length, 0);
  this->ViewAxisCenterIcon->SetImage( image_ViewAxisMiddle,
                                      image_ViewAxisMiddle_width,
                                      image_ViewAxisMiddle_height,
                                      image_ViewAxisMiddle_pixel_size,
                                      image_ViewAxisMiddle_length, 0);
  this->SpinButtonIcon->SetImage ( image_ViewSpin,
                                   image_ViewSpin_width,
                                   image_ViewSpin_height,
                                   image_ViewSpin_pixel_size,
                                   image_ViewSpin_length, 0 );                                   
  this->RockButtonIcon->SetImage ( image_ViewRock,
                                   image_ViewRock_width,
                                   image_ViewRock_height,
                                   image_ViewRock_pixel_size,
                                   image_ViewRock_length, 0 );                                   
  this->OrthoButtonIcon->SetImage ( image_ViewOrtho,
                                   image_ViewOrtho_width,
                                   image_ViewOrtho_height,
                                   image_ViewOrtho_pixel_size,
                                   image_ViewOrtho_length, 0 );                                   
  this->PerspectiveButtonIcon->SetImage ( image_ViewPerspective,
                                   image_ViewPerspective_width,
                                   image_ViewPerspective_height,
                                   image_ViewPerspective_pixel_size,
                                   image_ViewPerspective_length, 0 );                                   
  this->CenterButtonIcon->SetImage ( image_ViewCenter,
                                   image_ViewCenter_width,
                                   image_ViewCenter_height,
                                   image_ViewCenter_pixel_size,
                                   image_ViewCenter_length, 0 );                                   
  this->SelectButtonIcon->SetImage ( image_ViewSelect,
                                   image_ViewSelect_width,
                                   image_ViewSelect_height,
                                   image_ViewSelect_pixel_size,
                                   image_ViewSelect_length, 0 );                                   
  this->StereoButtonIcon->SetImage ( image_ViewStereo,
                                   image_ViewStereo_width,
                                   image_ViewStereo_height,
                                   image_ViewStereo_pixel_size,
                                   image_ViewStereo_length, 0 );                                   
  this->LookFromButtonIcon->SetImage ( image_ViewAxisLookFrom,
                                   image_ViewAxisLookFrom_width,
                                   image_ViewAxisLookFrom_height,
                                   image_ViewAxisLookFrom_pixel_size,
                                   image_ViewAxisLookFrom_length, 0 );                                   
  this->RotateAroundButtonIcon->SetImage ( image_ViewAxisRotateAround,
                                   image_ViewAxisRotateAround_width,
                                   image_ViewAxisRotateAround_height,
                                   image_ViewAxisRotateAround_pixel_size,
                                   image_ViewAxisRotateAround_length, 0 );                                   
  this->VisibilityButtonIcon->SetImage ( image_ViewFeaturesVisible,
                                         image_ViewFeaturesVisible_width,
                                         image_ViewFeaturesVisible_height,
                                         image_ViewFeaturesVisible_pixel_size,
                                         image_ViewFeaturesVisible_length, 0 );
  this->SliceOpacityButtonIcon->SetImage ( image_ViewSliceOpacity,
                                           image_ViewSliceOpacity_width,
                                           image_ViewSliceOpacity_height,
                                           image_ViewSliceOpacity_pixel_size,
                                           image_ViewSliceOpacity_length, 0 );                                           

    this->NavZoomInIcon->SetImage( image_NavZoomIn,
                                   image_NavZoomIn_width,
                                   image_NavZoomIn_height,
                                   image_NavZoomIn_pixel_size, 0, 0);
    this->NavZoomOutIcon->SetImage( image_NavZoomOut,
                                    image_NavZoomOut_width,
                                    image_NavZoomOut_height,
                                    image_NavZoomOut_pixel_size, 0, 0);
    
}



//---------------------------------------------------------------------------
void vtkSlicerViewControlIcons::PrintSelf ( ostream& os, vtkIndent indent )
{
    this->vtkObject::PrintSelf ( os, indent );

    os << indent << "SlicerViewControlIcons: " << this->GetClassName ( ) << "\n";

    os << indent << "ViewAxisAIconLO" << this->GetViewAxisAIconLO() << "\n";
    os << indent << "ViewAxisAIconHI" << this->GetViewAxisAIconHI () << "\n";
    os << indent << "ViewAxisPIconLO" << this->GetViewAxisPIconLO () << "\n";
    os << indent << "ViewAxisPIconHI" << this->GetViewAxisPIconHI () << "\n";
    os << indent << "ViewAxisRIconLO" << this->GetViewAxisRIconLO () << "\n";
    os << indent << "ViewAxisRIconHI" << this->GetViewAxisRIconHI () << "\n";
    os << indent << "ViewAxisLIconLO" << this->GetViewAxisLIconLO () << "\n";
    os << indent << "ViewAxisLIconHI" << this->GetViewAxisLIconHI () << "\n";
    os << indent << "ViewAxisSIconLO" << this->GetViewAxisSIconLO () << "\n";
    os << indent << "ViewAxisSIconHI" << this->GetViewAxisSIconHI () << "\n";
    os << indent << "ViewAxisIIconLO" << this->GetViewAxisIIconLO () << "\n";
    os << indent << "ViewAxisIIconHI" << this->GetViewAxisIIconHI () << "\n";
    os << indent << "ViewAxisTopCornerIcon" << this->GetViewAxisTopCornerIcon () << "\n";
    os << indent << "ViewAxisBottomCornerIcon" << this->GetViewAxisBottomCornerIcon () << "\n";
    os << indent << "ViewAxisCenterIcon" << this->GetViewAxisCenterIcon () << "\n";
    os << indent << "SpinButtonIcon" << this->GetSpinButtonIcon () << "\n";
    os << indent << "RockButtonIcon" << this->GetRockButtonIcon () << "\n";
    os << indent << "OrthoButtonIcon" << this->GetOrthoButtonIcon () << "\n";
    os << indent << "PerspectiveButtonIcon" << this->GetPerspectiveButtonIcon () << "\n";
    os << indent << "CenterButtonIcon" << this->GetCenterButtonIcon () << "\n";
    os << indent << "SelectButtonIcon" << this->GetSelectButtonIcon () << "\n";
    os << indent << "StereoButtonIcon" << this->GetStereoButtonIcon () << "\n";
    os << indent << "LookFromButtonIcon" << this->GetLookFromButtonIcon () << "\n";
    os << indent << "RotateAroundButtonIcon" << this->GetRotateAroundButtonIcon () << "\n";
    os << indent << "VisibilityButtonIcon" << this->GetVisibilityButtonIcon () << "\n";
    os << indent << "SliceOpacityButtonIcon" << this->GetSliceOpacityButtonIcon () << "\n";
}
