#include "bench/fib.hpp"

// RE Benchmark TU 24 of 20000 (depth=28, stamp="default")
namespace bench_tu_24 {
constexpr unsigned long long result = ::bench::slow_fib<28, 24>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_24
