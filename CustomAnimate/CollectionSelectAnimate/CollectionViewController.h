//
//  CollectionViewController.h
//  CustomAnimate
//
//  Created by meitu on 16/7/7.
//  Copyright © 2016年 meitu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewController : UIViewController

@property (weak, nonatomic) IBOutlet UICollectionView *mainCollection;

@property (nonatomic, strong) NSIndexPath * currentIndexPath;

@end
