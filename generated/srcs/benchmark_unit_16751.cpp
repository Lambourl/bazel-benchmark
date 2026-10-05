#include "bench/fib.hpp"

// RE Benchmark TU 16751 of 20000 (depth=28, stamp="default")
namespace bench_tu_16751 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16751>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16751
