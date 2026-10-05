#include "bench/fib.hpp"

// RE Benchmark TU 11601 of 20000 (depth=28, stamp="default")
namespace bench_tu_11601 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11601>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11601
