#include "bench/fib.hpp"

// RE Benchmark TU 14776 of 20000 (depth=28, stamp="default")
namespace bench_tu_14776 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14776>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14776
