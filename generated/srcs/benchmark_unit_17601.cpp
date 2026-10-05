#include "bench/fib.hpp"

// RE Benchmark TU 17601 of 20000 (depth=28, stamp="default")
namespace bench_tu_17601 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17601>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17601
