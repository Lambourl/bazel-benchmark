#include "bench/fib.hpp"

// RE Benchmark TU 16868 of 20000 (depth=28, stamp="default")
namespace bench_tu_16868 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16868>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16868
