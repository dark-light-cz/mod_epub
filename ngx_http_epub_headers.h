ngx_int_t ngx_http_epub_strip_range_header(ngx_http_request_t *r);
ngx_int_t ngx_http_epub_add_cache_control(ngx_http_request_t *r);
ngx_int_t ngx_http_epub_set_range_header(ngx_http_request_t *r, 
        ngx_http_epub_range_t *piece_range, ngx_http_epub_range_t *range);
ngx_int_t ngx_http_epub_add_content_range_header(ngx_http_request_t *r);
ngx_int_t ngx_http_epub_add_full_content_range(ngx_http_request_t *r);
ngx_int_t ngx_http_epub_add_partial_content_range(ngx_http_request_t *r,
        ngx_http_epub_ctx_t *ctx);

ngx_int_t ngx_http_epub_init_multipart_range(ngx_http_request_t *r,
        ngx_http_epub_ctx_t *ctx);

ngx_int_t ngx_http_epub_init_subrequest_headers(ngx_http_request_t *r, ngx_http_epub_ctx_t *ctx,
        ngx_http_request_t *sr, ngx_http_epub_range_t *piece_range,
        ngx_http_epub_range_t *req_range);

ngx_int_t ngx_http_epub_variable_unknown_header(ngx_http_request_t *r,
                                           ngx_http_variable_value_t *v, ngx_str_t *var, ngx_list_part_t *part,
                                           size_t prefix);
