/*
 * Copyright (C) 2019 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "KsnipConfigOptions.h"

QString KsnipConfigOptions::rememberPositionString()
{
	return applicationSectionString() + QStringLiteral("SavePosition");
}

QString KsnipConfigOptions::promptSaveBeforeExitString()
{
	return applicationSectionString() + QStringLiteral("PromptSaveBeforeExit");
}

QString KsnipConfigOptions::autoCopyToClipboardNewCapturesString()
{
	return applicationSectionString() + QStringLiteral("AutoCopyToClipboardNewCaptures");
}

QString KsnipConfigOptions::autoSaveNewCapturesString()
{
	return applicationSectionString() + QStringLiteral("AutoSaveNewCaptures");
}

QString KsnipConfigOptions::rememberToolSelectionString()
{
	return annotatorSectionString() + QStringLiteral("SaveToolsSelection");
}

QString KsnipConfigOptions::useTabsString()
{
	return applicationSectionString() + QStringLiteral("UseTabs");
}

QString KsnipConfigOptions::autoHideTabsString()
{
	return applicationSectionString() + QStringLiteral("AutoHideTabs");
}

QString KsnipConfigOptions::captureOnStartupString()
{
	return applicationSectionString() + QStringLiteral("CaptureOnStartup");
}

QString KsnipConfigOptions::freezeImageWhileSnippingEnabledString()
{
	return imageGrabberSectionString() + QStringLiteral("FreezeImageWhileSnippingEnabled");
}

QString KsnipConfigOptions::positionString()
{
	return mainWindowSectionString() + QStringLiteral("Position");
}

QString KsnipConfigOptions::captureModeString()
{
	return imageGrabberSectionString() + QStringLiteral("CaptureMode");
}

QString KsnipConfigOptions::saveQualityModeString()
{
	return saveSectionString() + QStringLiteral("SaveQualityMode");
}

QString KsnipConfigOptions::saveQualityFactorString()
{
	return saveSectionString() + QStringLiteral("SaveQualityFactor");
}

QString KsnipConfigOptions::saveDirectoryString()
{
	return applicationSectionString() + QStringLiteral("SaveDirectory");
}

QString KsnipConfigOptions::saveFilenameString()
{
	return applicationSectionString() + QStringLiteral("SaveFilename");
}

QString KsnipConfigOptions::saveFormatString()
{
	return applicationSectionString() + QStringLiteral("SaveFormat");
}

QString KsnipConfigOptions::applicationStyleString()
{
	return applicationSectionString() + QStringLiteral("ApplicationStyle");
}

QString KsnipConfigOptions::useTrayIconString()
{
	return applicationSectionString() + QStringLiteral("UseTrayIcon");
}

QString KsnipConfigOptions::minimizeToTrayString()
{
	return applicationSectionString() + QStringLiteral("MinimizeToTray");
}

QString KsnipConfigOptions::closeToTrayString()
{
	return applicationSectionString() + QStringLiteral("CloseToTray");
}

QString KsnipConfigOptions::startMinimizedToTrayString()
{
	return applicationSectionString() + QStringLiteral("StartMinimizedToTray");
}

QString KsnipConfigOptions::rememberLastSaveDirectoryString()
{
	return applicationSectionString() + QStringLiteral("RememberLastSaveDirectory");
}

QString KsnipConfigOptions::useSingleInstanceString()
{
	return applicationSectionString() + QStringLiteral("UseSingleInstanceString");
}

QString KsnipConfigOptions::textFontString()
{
	return annotatorSectionString() + QStringLiteral("TextFont");
}

QString KsnipConfigOptions::numberFontString()
{
	return annotatorSectionString() + QStringLiteral("NumberFont");
}

QString KsnipConfigOptions::itemShadowEnabledString()
{
	return annotatorSectionString() + QStringLiteral("ItemShadowEnabled");
}

QString KsnipConfigOptions::smoothPathEnabledString()
{
	return annotatorSectionString() + QStringLiteral("SmoothPathEnabled");
}

QString KsnipConfigOptions::smoothPathFactorString()
{
	return annotatorSectionString() + QStringLiteral("SmoothPathFactor");
}

QString KsnipConfigOptions::rotateWatermarkEnabledString()
{
	return annotatorSectionString() + QStringLiteral("RotateWatermark");
}

QString KsnipConfigOptions::stickerPathsString()
{
	return annotatorSectionString() + QStringLiteral("StickerPaths");
}

QString KsnipConfigOptions::useDefaultStickerString()
{
	return annotatorSectionString() + QStringLiteral("UseDefaultSticker");
}

QString KsnipConfigOptions::captureCursorString()
{
	return imageGrabberSectionString() + QStringLiteral("CaptureCursor");
}

QString KsnipConfigOptions::snippingAreaRulersEnabledString()
{
	return imageGrabberSectionString() + QStringLiteral("SnippingAreaRulersEnabled");
}

QString KsnipConfigOptions::snippingAreaPositionAndSizeInfoEnabledString()
{
	return imageGrabberSectionString() + QStringLiteral("SnippingAreaPositionAndSizeInfoEnabled");
}

QString KsnipConfigOptions::snippingAreaMagnifyingGlassEnabledString()
{
	return imageGrabberSectionString() + QStringLiteral("SnippingAreaMagnifyingGlassEnabled");
}

QString KsnipConfigOptions::captureDelayString()
{
	return imageGrabberSectionString() + QStringLiteral("CaptureDelay");
}

QString KsnipConfigOptions::snippingCursorSizeString()
{
	return imageGrabberSectionString() + QStringLiteral("SnippingCursorSize");
}

QString KsnipConfigOptions::snippingCursorColorString()
{
	return imageGrabberSectionString() + QStringLiteral("SnippingCursorColor");
}

QString KsnipConfigOptions::lastRectAreaString()
{
	return imageGrabberSectionString() + QStringLiteral("LastRectArea");
}

QString KsnipConfigOptions::imgurUsernameString()
{
	return imgurSectionString() + QStringLiteral("Username");
}

QString KsnipConfigOptions::imgurClientIdString()
{
	return imgurSectionString() + QStringLiteral("ClientId");
}

QString KsnipConfigOptions::imgurClientSecretString()
{
	return imgurSectionString() + QStringLiteral("ClientSecret");
}

QString KsnipConfigOptions::imgurAccessTokenString()
{
	return imgurSectionString() + QStringLiteral("AccessToken");
}

QString KsnipConfigOptions::imgurRefreshTokenString()
{
	return imgurSectionString() + QStringLiteral("RefreshToken");
}

QString KsnipConfigOptions::imgurForceAnonymousString()
{
	return imgurSectionString() + QStringLiteral("ForceAnonymous");
}

QString KsnipConfigOptions::imgurLinkDirectlyToImageString()
{
	return imgurSectionString() + QStringLiteral("OpenLinkDirectlyToImage");
}

QString KsnipConfigOptions::imgurOpenLinkInBrowserString()
{
	return imgurSectionString() + QStringLiteral("OpenLinkInBrowser");
}

QString KsnipConfigOptions::imgurAlwaysCopyToClipboardString()
{
	return imgurSectionString() + QStringLiteral("AlwaysCopyToClipboard");
}

QString KsnipConfigOptions::imgurBaseUrlString()
{
	return imgurSectionString() + QStringLiteral("BaseUrl");
}

QString KsnipConfigOptions::uploadScriptPathString()
{
	return uploadScriptSectionString() + QStringLiteral("UploadScriptPath");
}

QString KsnipConfigOptions::confirmBeforeUploadString()
{
	return uploaderSectionString() + QStringLiteral("ConfirmBeforeUpload");
}

QString KsnipConfigOptions::uploaderTypeString()
{
	return uploaderSectionString() + QStringLiteral("UploaderType");
}

QString KsnipConfigOptions::uploadScriptCopyOutputToClipboardString()
{
	return uploadScriptSectionString() + QStringLiteral("CopyOutputToClipboard");
}

QString KsnipConfigOptions::uploadScriptStopOnStdErrString()
{
	return uploadScriptSectionString() + QStringLiteral("UploadScriptStoOnStdErr");
}

QString KsnipConfigOptions::uploadScriptCopyOutputFilterString()
{
	return uploadScriptSectionString() + QStringLiteral("CopyOutputFilter");
}

QString KsnipConfigOptions::globalHotKeysEnabledString()
{
	return hotKeysSectionString() + QStringLiteral("GlobalHotKeysEnabled");
}

QString KsnipConfigOptions::rectAreaHotKeyString()
{
	return hotKeysSectionString() + QStringLiteral("RectAreaHotKey");
}

QString KsnipConfigOptions::lastRectAreaHotKeyString()
{
	return hotKeysSectionString() + QStringLiteral("LastRectAreaHotKey");
}

QString KsnipConfigOptions::fullScreenHotKeyString()
{
	return hotKeysSectionString() + QStringLiteral("FullScreenHotKey");
}

QString KsnipConfigOptions::currentScreenHotKeyString()
{
	return hotKeysSectionString() + QStringLiteral("CurrentScreenHotKey");
}

QString KsnipConfigOptions::activeWindowHotKeyString()
{
	return hotKeysSectionString() + QStringLiteral("ActiveWindowHotKey");
}

QString KsnipConfigOptions::windowUnderCursorHotKeyString()
{
	return hotKeysSectionString() + QStringLiteral("WindowUnderCursorHotKey");
}

QString KsnipConfigOptions::applicationSectionString()
{
	return QStringLiteral("Application/");;
}

QString KsnipConfigOptions::imageGrabberSectionString()
{
	return QStringLiteral("ImageGrabber/");
}

QString KsnipConfigOptions::annotatorSectionString()
{
	return QStringLiteral("Painter/");
}

QString KsnipConfigOptions::uploaderSectionString()
{
	return QStringLiteral("Uploader/");
}

QString KsnipConfigOptions::imgurSectionString()
{
	return QStringLiteral("Imgur/");
}

QString KsnipConfigOptions::uploadScriptSectionString()
{
	return QStringLiteral("UploadScript/");
}

QString KsnipConfigOptions::hotKeysSectionString()
{
	return QStringLiteral("HotKeys/");
}

QString KsnipConfigOptions::mainWindowSectionString()
{
	return QStringLiteral("MainWindow/");
}

QString KsnipConfigOptions::saveSectionString()
{
	return QStringLiteral("Save/");
}

