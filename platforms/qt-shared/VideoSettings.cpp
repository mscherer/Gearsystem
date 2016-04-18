/*
 * Gearsystem - Sega Master System / Game Gear Emulator
 * Copyright (C) 2013  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#include <QColorDialog>
#include "VideoSettings.h"
#include "GLFrame.h"
#include "Emulator.h"
#include "MainWindow.h"

VideoSettings::VideoSettings(GLFrame* pGLFrame, Emulator* pEmulator)
{
    widget.setupUi(this);
    m_pEmulator = pEmulator;
    m_pGLFrame = pGLFrame;
}

VideoSettings::~VideoSettings()
{
}

void VideoSettings::PressedOK()
{
    m_pGLFrame->SetBilinearFiletering(widget.checkBoxFilter->isChecked());
    m_pGLFrame->ResumeRenderThread();
    this->accept();
}

void VideoSettings::PressedCancel()
{
    m_pGLFrame->ResumeRenderThread();
    this->reject();
}

void VideoSettings::SaveSettings(QSettings& settings)
{
    settings.setValue("BilinearFiltering", widget.checkBoxFilter->isChecked());
}

void VideoSettings::LoadSettings(QSettings& settings)
{
    widget.checkBoxFilter->setChecked(settings.value("BilinearFiltering", false).toBool());
    m_pGLFrame->SetBilinearFiletering(widget.checkBoxFilter->isChecked());
}