/* GStreamer
 * Copyright (C) 2024 FIXME <fixme@example.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef _GST_FORMATCONVERT_H_
#define _GST_FORMATCONVERT_H_

#include <gst/video/video.h>
#include <gst/video/gstvideofilter.h>

G_BEGIN_DECLS

#define GST_TYPE_FORMATCONVERT   (gst_formatconvert_get_type())
#define GST_FORMATCONVERT(obj)   (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_FORMATCONVERT,GstFormatconvert))
#define GST_FORMATCONVERT_CLASS(klass)   (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_FORMATCONVERT,GstFormatconvertClass))
#define GST_IS_FORMATCONVERT(obj)   (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_FORMATCONVERT))
#define GST_IS_FORMATCONVERT_CLASS(obj)   (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_FORMATCONVERT))

typedef struct _GstFormatconvert GstFormatconvert;
typedef struct _GstFormatconvertClass GstFormatconvertClass;

struct _GstFormatconvert
{
  GstVideoFilter base_formatconvert;

};

struct _GstFormatconvertClass
{
  GstVideoFilterClass base_formatconvert_class;
};

GType gst_formatconvert_get_type (void);

G_END_DECLS

#endif
