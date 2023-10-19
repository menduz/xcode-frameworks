/*
	AppKit.h
	Application Kit
	Copyright (c) 1994-2023, Apple Inc.
	All rights reserved.

	This file is included by all AppKit application source files for easy building.  Using this file is preferred over importing individual files because it will use a precompiled version.
*/

#import <Foundation/Foundation.h>
#import <AppKit/AppKitDefines.h>
#import <AppKit/AppKitErrors.h>
#import <AppKit/NSGraphicsContext.h>
#import <AppKit/NSAccessibility.h>
#import <AppKit/NSAccessibilityColor.h>
#import <AppKit/NSActionCell.h>
#import <AppKit/NSAlert.h>
#import <AppKit/NSAnimationContext.h>
#import <AppKit/NSAppearance.h>
#import <AppKit/NSAppleScriptExtensions.h>
#import <AppKit/NSApplication.h>
#import <AppKit/NSBox.h>
#import <AppKit/NSButton.h>
#import <AppKit/NSButtonCell.h>
#import <AppKit/NSCandidateListTouchBarItem.h>
#import <AppKit/NSCell.h>
#import <AppKit/NSClipView.h>
#import <AppKit/NSCollectionView.h>
#import <AppKit/NSCollectionViewLayout.h>
#import <AppKit/NSCollectionViewCompositionalLayout.h>
#import <AppKit/NSCollectionViewFlowLayout.h>
#import <AppKit/NSCollectionViewGridLayout.h>
#import <AppKit/NSCollectionViewTransitionLayout.h>
#import <AppKit/NSColorSampler.h>
#import <AppKit/NSControl.h>
#import <AppKit/NSDiffableDataSource.h>
#import <AppKit/NSDockTile.h>
#import <AppKit/NSFont.h>
#import <AppKit/NSFontAssetRequest.h>
#import <AppKit/NSFontCollection.h>
#import <AppKit/NSFontDescriptor.h>
#import <AppKit/NSFontManager.h>
#import <AppKit/NSFontPanel.h>
#import <AppKit/NSForm.h>
#import <AppKit/NSFormCell.h>
#import <AppKit/NSMatrix.h>
#import <AppKit/NSMenu.h>
#import <AppKit/NSMenuItem.h>
#import <AppKit/NSMenuItemBadge.h>
#import <AppKit/NSColor.h>
#import <AppKit/NSColorSpace.h>
#import <AppKit/NSBitmapImageRep.h>
#import <AppKit/NSBrowser.h>
#import <AppKit/NSBrowserCell.h>
#import <AppKit/NSCachedImageRep.h>
#import <AppKit/NSCIImageRep.h>
#import <AppKit/NSColorList.h>
#import <AppKit/NSColorPanel.h>
#import <AppKit/NSColorPicking.h>
#import <AppKit/NSColorPicker.h>
#import <AppKit/NSColorPickerTouchBarItem.h>
#import <AppKit/NSColorWell.h>
#import <AppKit/NSUserInterfaceCompression.h>
#import <AppKit/NSCursor.h>
#import <AppKit/NSCustomImageRep.h>
#import <AppKit/NSCustomTouchBarItem.h>
#import <AppKit/NSDocument.h>
#import <AppKit/NSDocumentController.h>
#import <AppKit/NSDragging.h>
#import <AppKit/NSDraggingItem.h>
#import <AppKit/NSDraggingSession.h>
#import <AppKit/NSFilePromiseProvider.h>
#import <AppKit/NSFilePromiseReceiver.h>
#import <AppKit/NSEPSImageRep.h>
#import <AppKit/NSErrors.h>
#import <AppKit/NSEvent.h>
#import <AppKit/NSFileWrapperExtensions.h>
#import <AppKit/NSHelpManager.h>
#import <AppKit/NSGradient.h>
#import <AppKit/NSGraphics.h>
#import <AppKit/NSGroupTouchBarItem.h>
#import <AppKit/NSGestureRecognizer.h>
#import <AppKit/NSClickGestureRecognizer.h>
#import <AppKit/NSPanGestureRecognizer.h>
#import <AppKit/NSPressGestureRecognizer.h>
#import <AppKit/NSMagnificationGestureRecognizer.h>
#import <AppKit/NSRotationGestureRecognizer.h>
#import <AppKit/NSLayoutConstraint.h>
#import <AppKit/NSLayoutGuide.h>
#import <AppKit/NSLayoutAnchor.h>
#import <AppKit/NSImage.h>
#import <AppKit/NSImageCell.h>
#import <AppKit/NSImageRep.h>
#import <AppKit/NSImageView.h>
#import <AppKit/NSNib.h>
#import <AppKit/NSNibLoading.h>
#import <AppKit/NSPrinter.h>
#import <AppKit/NSScrubber.h>
#import <AppKit/NSScrubberItemView.h>
#import <AppKit/NSScrubberLayout.h>
#import <AppKit/NSSharingServicePickerTouchBarItem.h>
#import <AppKit/NSSliderAccessory.h>
#import <AppKit/NSSliderTouchBarItem.h>
#import <AppKit/NSSpeechRecognizer.h>
#import <AppKit/NSSpeechSynthesizer.h>
#import <AppKit/NSSpellChecker.h>
#import <AppKit/NSSplitView.h>
#import <AppKit/NSSplitViewController.h>
#import <AppKit/NSOpenPanel.h>
#import <AppKit/NSPageLayout.h>
#import <AppKit/NSPanel.h>
#import <AppKit/NSPasteboard.h>
#import <AppKit/NSPasteboardItem.h>
#import <AppKit/NSPopoverTouchBarItem.h>
#import <AppKit/NSPopUpButton.h>
#import <AppKit/NSPrintInfo.h>
#import <AppKit/NSPrintOperation.h>
#import <AppKit/NSPrintPanel.h>
#import <AppKit/NSPDFInfo.h>
#import <AppKit/NSPDFPanel.h>
#import <AppKit/NSResponder.h>
#import <AppKit/NSSavePanel.h>
#import <AppKit/NSMediaLibraryBrowserController.h>
#import <AppKit/NSScreen.h>
#import <AppKit/NSScrollView.h>
#import <AppKit/NSScroller.h>
#import <AppKit/NSSegmentedControl.h>
#import <AppKit/NSSegmentedCell.h>
#import <AppKit/NSSharingService.h>
#import <AppKit/NSSlider.h>
#import <AppKit/NSSliderCell.h>
#import <AppKit/NSSpellProtocol.h>
#import <AppKit/NSStackView.h>
#import <AppKit/NSSwitch.h>
#import <AppKit/NSGridView.h>
#import <AppKit/NSText.h>
#import <AppKit/NSTextCheckingClient.h>
#import <AppKit/NSTextCheckingController.h>
#import <AppKit/NSTextField.h>
#import <AppKit/NSTextFieldCell.h>
#import <AppKit/NSTextInsertionIndicator.h>
#import <AppKit/NSTokenField.h>
#import <AppKit/NSTokenFieldCell.h>
#import <AppKit/NSTouchBar.h>
#import <AppKit/NSTouchBarItem.h>
#import <AppKit/NSTrackingArea.h>
#import <AppKit/NSTrackingSeparatorToolbarItem.h>
#import <AppKit/NSUserActivity.h>
#import <AppKit/NSView.h>
#import <AppKit/NSViewController.h>
#import <AppKit/NSWindow.h>
#import <AppKit/NSWindowTab.h>
#import <AppKit/NSWindowTabGroup.h>
#import <AppKit/NSWindowController.h>
#import <AppKit/NSWorkspace.h>
#import <AppKit/NSRunningApplication.h>
#import <AppKit/NSComboBox.h>
#import <AppKit/NSComboBoxCell.h>
#import <AppKit/NSComboButton.h>
#import <AppKit/NSTableCellView.h>
#import <AppKit/NSTableColumn.h>
#import <AppKit/NSTableHeaderCell.h>
#import <AppKit/NSTableHeaderView.h>
#import <AppKit/NSTableRowView.h>
#import <AppKit/NSTableView.h>
#import <AppKit/NSTableViewDiffableDataSource.h>
#import <AppKit/NSTableViewRowAction.h>
#import <AppKit/NSOutlineView.h>
#import <AppKit/NSAttributedString.h>
#import <AppKit/NSLayoutManager.h>
#import <AppKit/NSParagraphStyle.h>
#import <AppKit/NSTextStorage.h>
#import <AppKit/NSTextView.h>
#import <AppKit/NSTextContainer.h>
#import <AppKit/NSTextAttachment.h>
#import <AppKit/NSInputManager.h>
#import <AppKit/NSInputServer.h>
#import <AppKit/NSStringDrawing.h>
#import <AppKit/NSRulerMarker.h>
#import <AppKit/NSRulerView.h>
#import <AppKit/NSSecureTextField.h>
#import <AppKit/NSInterfaceStyle.h>
#import <AppKit/NSNibDeclarations.h>
#import <AppKit/NSProgressIndicator.h>
#import <AppKit/NSTabView.h>
#import <AppKit/NSTabViewController.h>
#import <AppKit/NSTabViewItem.h>
#import <AppKit/NSMenuItemCell.h>
#import <AppKit/NSPopUpButtonCell.h>
#import <AppKit/NSAffineTransform.h>
#import <AppKit/NSBezierPath.h>
#import <AppKit/NSPICTImageRep.h>
#import <AppKit/NSStatusBar.h>
#import <AppKit/NSStatusBarButton.h>
#import <AppKit/NSStatusItem.h>
#import <AppKit/NSSound.h>
#import <AppKit/NSMovie.h>
#import <AppKit/NSPDFImageRep.h>
#import <AppKit/NSDrawer.h>
#import <AppKit/NSOpenGL.h>
#import <AppKit/NSOpenGLLayer.h>
#import <AppKit/NSOpenGLView.h>
#import <AppKit/NSApplicationScripting.h>
#import <AppKit/NSDocumentScripting.h>
#import <AppKit/NSTextStorageScripting.h>
#import <AppKit/NSToolbar.h>
#import <AppKit/NSToolbarItem.h>
#import <AppKit/NSToolbarItemGroup.h>
#import <AppKit/NSMenuToolbarItem.h>
#import <AppKit/NSSharingServicePickerToolbarItem.h>
#import <AppKit/NSWindowScripting.h>
#import <AppKit/NSStepper.h>
#import <AppKit/NSStepperCell.h>
#import <AppKit/NSGlyphInfo.h>
#import <AppKit/NSShadow.h>
#import <AppKit/NSATSTypesetter.h>
#import <AppKit/NSGlyphGenerator.h>
#import <AppKit/NSSearchField.h>
#import <AppKit/NSSearchFieldCell.h>
#import <AppKit/NSController.h>
#import <AppKit/NSObjectController.h>
#import <AppKit/NSArrayController.h>
#import <AppKit/NSDictionaryController.h>
#import <AppKit/NSTreeNode.h>
#import <AppKit/NSTreeController.h>
#import <AppKit/NSUserDefaultsController.h>
#import <AppKit/NSKeyValueBinding.h>
#import <AppKit/NSTextList.h>
#import <AppKit/NSTextTable.h>
#import <AppKit/NSDatePickerCell.h>
#import <AppKit/NSDatePicker.h>
#import <AppKit/NSLevelIndicatorCell.h>
#import <AppKit/NSLevelIndicator.h>
#import <AppKit/NSAnimation.h>
#import <AppKit/NSPersistentDocument.h>
#import <AppKit/NSRuleEditor.h>
#import <AppKit/NSPredicateEditor.h>
#import <AppKit/NSPredicateEditorRowTemplate.h>
#import <AppKit/NSPathCell.h>
#import <AppKit/NSPathControl.h>
#import <AppKit/NSPathComponentCell.h>
#import <AppKit/NSPathControlItem.h>
#import <AppKit/NSPageController.h>
#import <AppKit/NSPopover.h>
#import <AppKit/NSTextInputClient.h>
#import <AppKit/NSTextInputContext.h>
#import <AppKit/NSUserInterfaceItemSearching.h>
#import <AppKit/NSUserInterfaceLayout.h>
#import <AppKit/NSTouch.h>
#import <AppKit/NSWindowRestoration.h>
#import <AppKit/NSTextAlternatives.h>
#import <AppKit/NSStoryboard.h>
#import <AppKit/NSStoryboardSegue.h>
#import <AppKit/NSVisualEffectView.h>
#import <AppKit/NSItemProvider.h>
#import <AppKit/NSTitlebarAccessoryViewController.h>
#import <AppKit/NSDataAsset.h>
#import <AppKit/NSAlignmentFeedbackFilter.h>
#import <AppKit/NSHapticFeedback.h>
#import <AppKit/NSPressureConfiguration.h>
#import <AppKit/NSButtonTouchBarItem.h>
#import <AppKit/NSPickerTouchBarItem.h>
#import <AppKit/NSStepperTouchBarItem.h>
#import <AppKit/NSTintConfiguration.h>
#import <AppKit/NSSearchToolbarItem.h>
#import <AppKit/NSPreviewRepresentingActivityItem.h>

#import <AppKit/NSTextRange.h>
#import <AppKit/NSTextSelection.h>
#import <AppKit/NSTextSelectionNavigation.h>
#import <AppKit/NSTextContentManager.h>
#import <AppKit/NSTextElement.h>
#import <AppKit/NSTextListElement.h>
#import <AppKit/NSTextLayoutFragment.h>
#import <AppKit/NSTextLayoutManager.h>
#import <AppKit/NSTextLineFragment.h>
#import <AppKit/NSTextViewportLayoutController.h>
#import <AppKit/NSTextAttachmentCell.h>
