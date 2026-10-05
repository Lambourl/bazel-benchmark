#include "bench/fib.hpp"

// RE Benchmark TU 11106 of 20000 (depth=28, stamp="default")
namespace bench_tu_11106 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11106>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11106
