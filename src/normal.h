/*
    normal.h: Helper routines for computing vertex normals

    This file is part of the implementation of

        Instant Field-Aligned Meshes
        Wenzel Jakob, Daniele Panozzo, Marco Tarini, and Olga Sorkine-Hornung
        In ACM Transactions on Graphics (Proc. SIGGRAPH Asia 2015)

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/

#pragma once

#include "mycommon.h"

using nanogui::MatrixXu;
using nanogui::MatrixXf;
using nanogui::Vector3f;

extern void computeVertexNormals(const MatrixXu &F, const MatrixXf &V, MatrixXf &N);