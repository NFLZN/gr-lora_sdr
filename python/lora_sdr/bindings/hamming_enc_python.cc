/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(hamming_enc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(95de0a3629edb5cc3f2e0463adb3a9e5) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lora_sdr/hamming_enc.h>
// pydoc.h is automatically generated in the build directory
#include <hamming_enc_pydoc.h>

void bind_hamming_enc(py::module &m) {

  using hamming_enc = ::gr::lora_sdr::hamming_enc;

  py::class_<hamming_enc, gr::sync_block, gr::block, gr::basic_block,
             std::shared_ptr<hamming_enc>>(m, "hamming_enc", D(hamming_enc))

      .def(py::init(&hamming_enc::make), py::arg("cr"), py::arg("sf"),
           D(hamming_enc, make))

      .def("set_cr", &hamming_enc::set_cr, py::arg("cr"),
           D(hamming_enc, set_cr))

      .def("get_cr", &hamming_enc::get_cr, D(hamming_enc, get_cr))

      .def("set_sf", &hamming_enc::set_sf, py::arg("sf"),
           D(hamming_enc, set_sf))

      ;
}
