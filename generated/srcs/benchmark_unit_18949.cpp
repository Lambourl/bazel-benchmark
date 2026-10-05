#include "bench/fib.hpp"

// RE Benchmark TU 18949 of 20000 (depth=28, stamp="default")
namespace bench_tu_18949 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18949>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18949
