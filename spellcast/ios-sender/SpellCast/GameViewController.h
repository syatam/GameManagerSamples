// Copyright 2015 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "SpellCastViewController.h"
#import "SpellRuneDrawingView.h"

/**
 * Controls the main game UI when the player can cast spells.
 */
@interface GameViewController : SpellCastViewController<SpellRuneDrawingDelegate>

@property(weak, nonatomic) IBOutlet UIButton *waterButton;
@property(weak, nonatomic) IBOutlet UIButton *fireButton;
@property(weak, nonatomic) IBOutlet UIButton *earthButton;
@property(weak, nonatomic) IBOutlet UIButton *airButton;
@property(weak, nonatomic) IBOutlet UIButton *shieldButton;
@property(weak, nonatomic) IBOutlet UIButton *healButton;

@property(weak, nonatomic) IBOutlet UIImageView *gameUIImageView;

/** Used by all spell buttons **/
- (IBAction)castSpell:(id)sender;

@end
