#pragma once

#include <torch/all.h>

void paged_attention(torch::Tensor& out, torch::Tensor& exp_sums,
                     torch::Tensor& max_logits, torch::Tensor& tmp_out,
                     torch::Tensor& query, torch::Tensor& key_cache,
                     torch::Tensor& value_cache, int64_t num_kv_heads,
                     double scale, torch::Tensor& block_tables,
                     torch::Tensor& context_lens,
                     const std::optional<torch::Tensor>& query_start_loc,
                     int64_t block_size, int64_t max_context_len,
                     const std::optional<torch::Tensor>& alibi_slopes,
                     const std::string& kv_cache_dtype, torch::Tensor& k_scale,
                     torch::Tensor& v_scale);
