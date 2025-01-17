//
//  EditImageViewController.h
//  SINTYOKU
//
//  Created by sadakoa on 2014/07/03.
//  Copyright (c) 2014年 sadakoa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WSCoachMarksView.h"
// Error回避

@interface EditImageViewController : UIViewController\
<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

{
    IBOutlet UILabel *label;
    IBOutlet UIImageView *imageView;
    IBOutlet UIView *UIView;
    
    // 貼り付け中のスタンプ画像
    UIImageView *currentStampView;
    
    UIImageView *fackImage;
    
    // スタンプ貼り付け中かどうか
    BOOL _isPressStamp;
    
}

-(IBAction)test;
-(IBAction)doudesukaButton;
-(IBAction)damedesuButton;

// スタンプ削除ボタン
-(IBAction)deleteStampImageButton;

// スタンプ選択ボタン
 //-(IBAction)selectStampImageButton;

// 戻るボタン
// -(IBAction)editBackButton;

// 進むボタン
// -(IBAction)editFrontButton;

@property (nonatomic) UIImage *arguments;
@property (nonatomic) UIImage *editPreviewImage;
@property (nonatomic) UIImage *pasedImage;
// スタンプ用画像
@property (nonatomic, retain) UIImageView *stampUIImageView;

// 画面に表示するためのもの
 @property (weak, nonatomic) IBOutlet UIImageView *argumentsLabelImage;


@end
