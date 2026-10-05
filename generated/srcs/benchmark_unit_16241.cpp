#include "bench/fib.hpp"

// RE Benchmark TU 16241 of 20000 (depth=28, stamp="default")
namespace bench_tu_16241 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16241>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16241
