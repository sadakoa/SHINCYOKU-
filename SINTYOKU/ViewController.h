//
//  ViewController.h
//  SINTYOKU
//
//  Created by sadakoa on 2014/07/03.
//  Copyright (c) 2014年 sadakoa. All rights reserved.
//

#import <UIKit/UIKit.h>

// ウォークスルーをインポート
#import "EAIntroView.h"

@interface ViewController : UIViewController
<UIImagePickerControllerDelegate, UINavigationControllerDelegate, EAIntroDelegate>

{
    IBOutlet UILabel *label;
    IBOutlet UIImageView *imageView;
    
    //次の画面へ渡す引数
    UIImage *_beforeStampEditImage;
}


// カメラを開く
-(IBAction)openCameraButton;

// フォトストリームを開く
-(IBAction)openStreamButton;

// ブラウザを開く
-(IBAction)openBrowserButton;

@property(nonatomic,weak) IBOutlet EAIntroView *introView;


@end
